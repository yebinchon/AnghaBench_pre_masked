
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rb_info {int board_name; } ;
struct rb_board_info {int flags; int name; } ;


 int FUNC_0 (struct rb_board_info*) ;
 struct rb_board_info* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct rb_info *VAR_1)
{
        int VAR_2;

        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
                const struct rb_board_info *VAR_3;

                VAR_3 = &VAR_0[VAR_2];
                if (FUNC_1(VAR_1->board_name, VAR_3->name) == 0)
                        return VAR_3->flags;
        }

        return 0;
}
