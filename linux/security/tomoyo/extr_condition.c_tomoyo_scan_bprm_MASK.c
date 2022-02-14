
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct tomoyo_page_dump {char* data; } ;
struct tomoyo_execve {char* tmp; struct tomoyo_page_dump dump; struct linux_binprm* bprm; } ;
struct tomoyo_envp {scalar_t__ is_not; scalar_t__ value; } ;
struct tomoyo_argv {scalar_t__ is_not; } ;
struct linux_binprm {unsigned long p; int argc; int envc; } ;
typedef int local_checked ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int const,int ) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int,char*,int const,struct tomoyo_argv const*,scalar_t__*) ;
 int FUNC_5 (struct linux_binprm*,unsigned long,struct tomoyo_page_dump*) ;
 int FUNC_6 (char*,char*,int const,struct tomoyo_envp const*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_7(struct tomoyo_execve *VAR_3,
        const u16 VAR_4, const struct tomoyo_argv *VAR_5,
        const u16 VAR_6, const struct tomoyo_envp *VAR_7)
{
 struct linux_binprm *VAR_8 = VAR_3->bprm;
 struct tomoyo_page_dump *VAR_9 = &VAR_3->dump;
 char *VAR_10 = VAR_3->tmp;
 int VAR_11 = 0;
 unsigned long VAR_12 = VAR_8->p;
 int VAR_13 = VAR_12 % VAR_1;
 int VAR_14 = VAR_8->argc;
 int VAR_15 = VAR_8->envc;
 bool VAR_16 = 1;
 u8 VAR_17[32];
 u8 *VAR_18;

 if (VAR_4 + VAR_6 <= sizeof(VAR_17)) {
  VAR_18 = VAR_17;
  FUNC_2(VAR_17, 0, sizeof(VAR_17));
 } else {
  VAR_18 = FUNC_1(VAR_4 + VAR_6, VAR_0);
  if (!VAR_18)
   return 0;
 }
 while (VAR_14 || VAR_15) {
  if (!FUNC_5(VAR_8, VAR_12, VAR_9)) {
   VAR_16 = 0;
   goto out;
  }
  VAR_12 += VAR_1 - VAR_13;
  while (VAR_13 < VAR_1) {

   const char *VAR_19 = VAR_9->data;
   const unsigned char VAR_20 = VAR_19[VAR_13++];

   if (VAR_20 && VAR_11 < VAR_2 - 10) {
    if (VAR_20 == '\\') {
     VAR_10[VAR_11++] = '\\';
     VAR_10[VAR_11++] = '\\';
    } else if (VAR_20 > ' ' && VAR_20 < 127) {
     VAR_10[VAR_11++] = VAR_20;
    } else {
     VAR_10[VAR_11++] = '\\';
     VAR_10[VAR_11++] = (VAR_20 >> 6) + '0';
     VAR_10[VAR_11++] =
      ((VAR_20 >> 3) & 7) + '0';
     VAR_10[VAR_11++] = (VAR_20 & 7) + '0';
    }
   } else {
    VAR_10[VAR_11] = '\0';
   }
   if (VAR_20)
    continue;

   if (VAR_14) {
    if (!FUNC_4(VAR_8->argc - VAR_14,
       VAR_10, VAR_4, VAR_5,
       VAR_18)) {
     VAR_16 = 0;
     break;
    }
    VAR_14--;
   } else if (VAR_15) {
    char *VAR_21 = FUNC_3(VAR_10, '=');

    if (VAR_21) {
     *VAR_21 = '\0';
     if (!FUNC_6(VAR_10, VAR_21 + 1,
        VAR_6, VAR_7,
        VAR_18 + VAR_4)) {
      VAR_16 = 0;
      break;
     }
    }
    VAR_15--;
   } else {
    break;
   }
   VAR_11 = 0;
  }
  VAR_13 = 0;
  if (!VAR_16)
   break;
 }
out:
 if (VAR_16) {
  int VAR_22;


  for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
   if (VAR_18[VAR_22])
    continue;




   if (VAR_5[VAR_22].is_not)
    continue;
   VAR_16 = 0;
   break;
  }
  for (VAR_22 = 0; VAR_22 < VAR_6; VAR_7++, VAR_22++) {
   if (VAR_18[VAR_4 + VAR_22])
    continue;




   if ((!VAR_7->value && !VAR_7->is_not) ||
       (VAR_7->value && VAR_7->is_not))
    continue;
   VAR_16 = 0;
   break;
  }
 }
 if (VAR_18 != VAR_17)
  FUNC_0(VAR_18);
 return VAR_16;
}
