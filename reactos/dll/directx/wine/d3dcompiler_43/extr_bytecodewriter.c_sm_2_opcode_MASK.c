
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {scalar_t__ has_predicate; scalar_t__ comptype; int num_srcs; scalar_t__ has_dst; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct instruction const*,int ,int) ;
 int FUNC_2 (struct bytecode_buffer*,int) ;

__attribute__((used)) static void FUNC_3(struct bc_writer *VAR_2,
                        const struct instruction *VAR_3,
                        DWORD VAR_4, struct bytecode_buffer *VAR_5) {

    int VAR_6 = VAR_3->has_dst ? 1 : 0;
    VAR_4 |= FUNC_1(VAR_3, VAR_3->num_srcs, VAR_6) << VAR_1;
    if(VAR_3->comptype)
        VAR_4 |= (FUNC_0(VAR_3->comptype) << 16) & (0xf << 16);
    if(VAR_3->has_predicate)
        VAR_4 |= VAR_0;
    FUNC_2(VAR_5,VAR_4);
}
