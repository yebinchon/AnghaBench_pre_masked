
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bytecode_buffer {int dummy; } ;
struct bwriter_shader {size_t num_samplers; TYPE_1__* samplers; } ;
struct TYPE_2__ {size_t const regnum; int mod; int type; } ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t const VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bytecode_buffer*,size_t) ;

__attribute__((used)) static void FUNC_4(const struct bwriter_shader *VAR_6, struct bytecode_buffer *VAR_7) {
    DWORD VAR_8;
    DWORD VAR_9 = VAR_0 | (2 << VAR_1);
    DWORD VAR_10;
    const DWORD VAR_11 = (1u << 31) | FUNC_2( VAR_2, 0 ) | VAR_5;

    for(VAR_8 = 0; VAR_8 < VAR_6->num_samplers; VAR_8++) {

        FUNC_3(VAR_7, VAR_9);
        VAR_10 = (1u << 31);

        VAR_10 |= (FUNC_1(VAR_6->samplers[VAR_8].type)) & VAR_4;
        FUNC_3(VAR_7, VAR_10);
        VAR_10 = VAR_11 | (VAR_6->samplers[VAR_8].regnum & VAR_3);
        VAR_10 |= FUNC_0(VAR_6->samplers[VAR_8].mod);
        FUNC_3(VAR_7, VAR_10);
    }
}
