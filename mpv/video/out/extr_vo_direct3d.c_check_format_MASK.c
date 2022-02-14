
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct fmt_entry {scalar_t__ mplayer_fmt; int fourcc; } ;
struct TYPE_5__ {int desktop_fmt; int d3d_handle; } ;
typedef TYPE_1__ d3d_priv ;
typedef int HRESULT ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*,char const*,int ) ;
 int FUNC_5 (TYPE_1__*,char*,char const*,int ) ;
 struct fmt_entry* VAR_5 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static D3DFORMAT FUNC_7(d3d_priv *VAR_6, uint32_t VAR_7,
                              bool VAR_8)
{
    const char *VAR_9 = VAR_8 ? "texture rendering" : "StretchRect";
    const struct fmt_entry *VAR_10 = &VAR_5[0];





    if (VAR_8 && !FUNC_3(VAR_7))
        return 0;

    while (VAR_10->mplayer_fmt) {
        if (VAR_10->mplayer_fmt == VAR_7) {
            HRESULT VAR_11;
            if (VAR_8) {
                VAR_11 = FUNC_1(VAR_6->d3d_handle,
                            VAR_0,
                            VAR_4,
                            VAR_6->desktop_fmt,
                            VAR_2 | VAR_3,
                            VAR_1,
                            VAR_10->fourcc);
            } else {


                VAR_11 = FUNC_2(VAR_6->d3d_handle,
                            VAR_0,
                            VAR_4,
                            VAR_10->fourcc,
                            VAR_6->desktop_fmt);
            }
            if (FUNC_0(VAR_11)) {
                FUNC_5(VAR_6, "Rejected image format "
                       "(%s): %s\n", VAR_9, FUNC_6(VAR_10->mplayer_fmt));
                return 0;
            }

            FUNC_4(VAR_6, "Accepted image format (%s): %s\n",
                   VAR_9, FUNC_6(VAR_10->mplayer_fmt));

            return VAR_10->fourcc;
        }
        VAR_10++;
    }

    return 0;
}
