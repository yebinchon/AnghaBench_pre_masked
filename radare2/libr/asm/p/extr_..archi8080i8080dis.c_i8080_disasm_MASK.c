
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int const mask; int const shift; scalar_t__ type; } ;
struct opcode_t {int size; int const cmd; TYPE_1__ arg2; TYPE_1__ arg1; int name; } ;


 int FUNC_0 (char*,int const,TYPE_1__*,int const) ;
 struct opcode_t* VAR_0 ;
 int FUNC_1 (char*,int,char*,int const) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(unsigned char const* const VAR_1, char* VAR_2, int VAR_3) {
  int const VAR_4 = VAR_1[0];
  int const VAR_5 = VAR_1[1] | (VAR_1[2] << 8);

  struct opcode_t const *VAR_6;
  for (VAR_6 = &VAR_0[0]; VAR_6->size; ++VAR_6) {
    int const VAR_7 = VAR_4 &
      ~((VAR_6->arg1.mask << VAR_6->arg1.shift) |
       (VAR_6->arg2.mask << VAR_6->arg2.shift));
    int const VAR_8 = (VAR_7 == 0xc0 || VAR_7 == 0xc2 || VAR_7 == 0xc4);
    if (VAR_7 == VAR_6->cmd) {
      FUNC_3(VAR_2, VAR_6->name);
      if (!VAR_8) FUNC_2(VAR_2, " ");
      FUNC_0(VAR_2 + FUNC_4(VAR_2), VAR_4, &VAR_6->arg1, VAR_5);
      if (VAR_6->arg2.type != 0) FUNC_2(VAR_2, (VAR_8 ? " " : ", "));
      FUNC_0(VAR_2 + FUNC_4(VAR_2), VAR_4, &VAR_6->arg2, VAR_5);
      return VAR_6->size;
    }
  }
  FUNC_1(VAR_2, VAR_3, "db 0x%02x", VAR_4);
  return 1;
}
