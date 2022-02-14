
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; int FormatID; } ;
struct image_codec {TYPE_1__ info; } ;
struct TYPE_5__ {int format; } ;
typedef int GpStatus ;
typedef TYPE_2__ GpImage ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 struct image_codec* VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static GpStatus FUNC_3(GpImage *VAR_5, const struct image_codec **VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        if ((VAR_4[VAR_7].info.Flags & VAR_1) &&
                FUNC_0(&VAR_4[VAR_7].info.FormatID, &VAR_5->format))
        {
            *VAR_6 = &VAR_4[VAR_7];
            return VAR_3;
        }
    }

    FUNC_1("no match for format: %s\n", FUNC_2(&VAR_5->format));
    return VAR_0;
}
