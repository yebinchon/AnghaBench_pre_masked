
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bl_tree; } ;
typedef TYPE_1__ deflate_state ;
struct TYPE_8__ {int Len; } ;
typedef TYPE_2__ ct_data ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_3(
 deflate_state *VAR_3,
 ct_data *VAR_4,
 int VAR_5
)
{
    int VAR_6;
    int VAR_7 = -1;
    int VAR_8;
    int VAR_9 = VAR_4[0].Len;
    int VAR_10 = 0;
    int VAR_11 = 7;
    int VAR_12 = 4;


    if (VAR_9 == 0) VAR_11 = 138, VAR_12 = 3;

    for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++) {
        VAR_8 = VAR_9; VAR_9 = VAR_4[VAR_6+1].Len;
        if (++VAR_10 < VAR_11 && VAR_8 == VAR_9) {
            continue;
        } else if (VAR_10 < VAR_12) {
            do { FUNC_2(VAR_3, VAR_8, VAR_3->bl_tree); } while (--VAR_10 != 0);

        } else if (VAR_8 != 0) {
            if (VAR_8 != VAR_7) {
                FUNC_2(VAR_3, VAR_8, VAR_3->bl_tree); VAR_10--;
            }
            FUNC_0(VAR_10 >= 3 && VAR_10 <= 6, " 3_6?");
            FUNC_2(VAR_3, VAR_2, VAR_3->bl_tree); FUNC_1(VAR_3, VAR_10-3, 2);

        } else if (VAR_10 <= 10) {
            FUNC_2(VAR_3, VAR_1, VAR_3->bl_tree); FUNC_1(VAR_3, VAR_10-3, 3);

        } else {
            FUNC_2(VAR_3, VAR_0, VAR_3->bl_tree); FUNC_1(VAR_3, VAR_10-11, 7);
        }
        VAR_10 = 0; VAR_7 = VAR_8;
        if (VAR_9 == 0) {
            VAR_11 = 138, VAR_12 = 3;
        } else if (VAR_8 == VAR_9) {
            VAR_11 = 6, VAR_12 = 3;
        } else {
            VAR_11 = 7, VAR_12 = 4;
        }
    }
}
