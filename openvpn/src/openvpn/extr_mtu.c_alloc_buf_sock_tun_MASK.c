
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int dummy; } ;
struct buffer {int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct frame const*) ;
 int FUNC_2 (struct frame const*,unsigned int const) ;
 int FUNC_3 (struct frame const*) ;
 int FUNC_4 (struct frame const*) ;
 struct buffer FUNC_5 (int ) ;
 int FUNC_6 (struct buffer*,int ) ;
 int FUNC_7 (struct buffer*,int ) ;

void
FUNC_8(struct buffer *VAR_0,
                   const struct frame *VAR_1,
                   const bool VAR_2,
                   const unsigned int VAR_3)
{

    *VAR_0 = FUNC_5(FUNC_1(VAR_1));
    FUNC_0(FUNC_6(VAR_0, FUNC_2(VAR_1, VAR_3)));
    VAR_0->len = VAR_2 ? FUNC_4(VAR_1) : FUNC_3(VAR_1);
    FUNC_0(FUNC_7(VAR_0, 0));
}
