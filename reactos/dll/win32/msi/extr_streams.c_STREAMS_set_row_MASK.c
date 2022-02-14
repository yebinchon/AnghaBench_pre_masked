
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_6__ {int num_cols; TYPE_2__* db; } ;
struct TYPE_5__ {int num_streams; TYPE_1__* streams; int strings; } ;
struct TYPE_4__ {int * stream; int str_index; } ;
typedef TYPE_3__ MSISTREAMSVIEW ;
typedef int MSIRECORD ;
typedef int IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int **) ;
 int * FUNC_4 (int *,int) ;
 int VAR_4 ;
 int FUNC_5 (char*,struct tagMSIVIEW*,int,int *,int) ;
 int FUNC_6 (int ,int const*,int,int ) ;

__attribute__((used)) static UINT FUNC_7(struct tagMSIVIEW *VAR_5, UINT VAR_6, MSIRECORD *VAR_7, UINT VAR_8)
{
    MSISTREAMSVIEW *VAR_9 = (MSISTREAMSVIEW *)VAR_5;

    FUNC_5("(%p, %d, %p, %08x)\n", VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_6 > VAR_9->db->num_streams || VAR_8 >= (1 << VAR_9->num_cols))
        return VAR_1;

    if (VAR_8 & 1)
    {
        const WCHAR *VAR_10 = FUNC_4( VAR_7, 1 );

        if (!VAR_10) return VAR_1;
        VAR_9->db->streams[VAR_6].str_index = FUNC_6( VAR_9->db->strings, VAR_10, -1, VAR_4 );
    }
    if (VAR_8 & 2)
    {
        IStream *VAR_11, *VAR_12;
        HRESULT VAR_13;
        UINT VAR_14;

        VAR_14 = FUNC_3( VAR_7, 2, &VAR_12 );
        if (VAR_14 != VAR_2)
            return VAR_14;

        VAR_11 = VAR_9->db->streams[VAR_6].stream;
        VAR_13 = FUNC_1( VAR_12, &VAR_3, (void **)&VAR_9->db->streams[VAR_6].stream );
        if (FUNC_0( VAR_13 ))
        {
            FUNC_2( VAR_12 );
            return VAR_0;
        }
        if (VAR_11) FUNC_2( VAR_11 );
    }

    return VAR_2;
}
