
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int key_size; } ;


 int FUNC_0 (int ,unsigned char*,int,char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(struct bpf_map_info *VAR_1, unsigned char *VAR_2,
         const char *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3);
 bool VAR_5, VAR_6;

 VAR_6 = VAR_1->key_size > 16 || VAR_4 > 16;
 VAR_5 = VAR_1->key_size + VAR_4 <= 24 && !VAR_6;

 FUNC_1("key:%c", VAR_6 ? '\n' : ' ');
 FUNC_0(VAR_0, VAR_2, VAR_1->key_size, " ");

 FUNC_1(VAR_5 ? "  " : "\n");

 FUNC_1("value:%c%s", VAR_6 ? '\n' : ' ', VAR_3);

 FUNC_1("\n");
}
