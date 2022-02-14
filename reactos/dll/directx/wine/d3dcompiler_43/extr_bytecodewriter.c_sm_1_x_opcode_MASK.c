
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {scalar_t__ coissue; } ;
struct bytecode_buffer {int dummy; } ;
struct bc_writer {int dummy; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct bytecode_buffer*,int ) ;

__attribute__((used)) static void FUNC_1(struct bc_writer *VAR_1,
                          const struct instruction *VAR_2,
                          DWORD VAR_3, struct bytecode_buffer *VAR_4) {

    if(VAR_2->coissue){
        VAR_3 |= VAR_0;
    }
    FUNC_0(VAR_4, VAR_3);
}
