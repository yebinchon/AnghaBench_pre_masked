
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int key_size; int value_size; int type; } ;


 int FUNC_0 (int ,unsigned char*,int,char*) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 unsigned int FUNC_4 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct bpf_map_info *VAR_1, unsigned char *VAR_2,
         unsigned char *VAR_3)
{
 if (!FUNC_2(VAR_1->type)) {
  bool VAR_4, VAR_5;

  VAR_5 = VAR_1->key_size > 16 || VAR_1->value_size > 16;
  VAR_4 = VAR_1->key_size + VAR_1->value_size <= 24 &&
   !VAR_5;

  if (VAR_1->key_size) {
   FUNC_3("key:%c", VAR_5 ? '\n' : ' ');
   FUNC_0(VAR_0, VAR_2, VAR_1->key_size, " ");

   FUNC_3(VAR_4 ? "  " : "\n");
  }

  if (VAR_1->value_size) {
   FUNC_3("value:%c", VAR_5 ? '\n' : ' ');
   FUNC_0(VAR_0, VAR_3, VAR_1->value_size, " ");
  }

  FUNC_3("\n");
 } else {
  unsigned int VAR_6, VAR_7, VAR_8;

  VAR_7 = FUNC_1();
  VAR_8 = FUNC_4(VAR_1->value_size, 8);

  if (VAR_1->key_size) {
   FUNC_3("key:\n");
   FUNC_0(VAR_0, VAR_2, VAR_1->key_size, " ");
   FUNC_3("\n");
  }
  if (VAR_1->value_size) {
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    FUNC_3("value (CPU %02d):%c",
           VAR_6, VAR_1->value_size > 16 ? '\n' : ' ');
    FUNC_0(VAR_0, VAR_3 + VAR_6 * VAR_8,
        VAR_1->value_size, " ");
    FUNC_3("\n");
   }
  }
 }
}
