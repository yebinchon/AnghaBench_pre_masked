
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_cached_range {scalar_t__ seek_start; int num_metadata; TYPE_1__** metadata; } ;
struct TYPE_3__ {scalar_t__ pts; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__**,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct demux_cached_range *VAR_1)
{
    int VAR_2 = 0;

    if (VAR_1->seek_start == VAR_0) {
        VAR_2 = VAR_1->num_metadata;
    } else {
        for (int VAR_3 = 0; VAR_3 < VAR_1->num_metadata ; VAR_3++) {
            if (VAR_1->metadata[VAR_3]->pts > VAR_1->seek_start)
                break;
            VAR_2 = VAR_3;
        }
    }


    VAR_2 = FUNC_0(VAR_2, VAR_1->num_metadata - 1);



    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_2(VAR_1->metadata[0]);
        FUNC_1(VAR_1->metadata, VAR_1->num_metadata, 0);
    }
}
