
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym {int offset; char* name; void* content; int address; scalar_t__ size; } ;
typedef int FILE ;
typedef int Elf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int *,int) ;

__attribute__((used)) static void FUNC_9(Elf_Ehdr *VAR_3, FILE *VAR_4, char *VAR_5,
    struct sym *VAR_6)
{
 char VAR_7[VAR_1];
 char *VAR_8, *VAR_9, *VAR_10;

 VAR_6->size = 0;
 VAR_6->address = 0;
 VAR_6->offset = 0;
 if (FUNC_3(VAR_4, 0, VAR_2) != 0) {
  FUNC_5("File seek failed");
  FUNC_1(VAR_0);
 }
 while (FUNC_2(VAR_7, VAR_1, VAR_4)) {
  VAR_9 = FUNC_6(VAR_7, '\n');
  if (!VAR_9) {
   FUNC_0("Missing line ending.\n");
   return;
  }
  VAR_10 = FUNC_7(VAR_7, VAR_5);
  if (VAR_10)
   break;
 }
 if (!VAR_10) {
  FUNC_0("Unable to find symbol: %s\n", VAR_5);
  return;
 }
 VAR_8 = FUNC_6(VAR_7, ' ');
 if (!VAR_8)
  return;

 *VAR_8 = '\0';
 VAR_6->address = FUNC_8(VAR_7, ((void*)0), 16);
 if (VAR_6->address == 0)
  return;
 VAR_6->offset = FUNC_4(VAR_3, VAR_6->address);
 VAR_6->name = VAR_5;
 VAR_6->content = (void *)VAR_3 + VAR_6->offset;
}
