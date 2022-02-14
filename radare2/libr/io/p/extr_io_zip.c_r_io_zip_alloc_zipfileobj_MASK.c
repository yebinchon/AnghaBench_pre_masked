
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int ut32 ;
struct zip_stat {int * name; } ;
struct zip {int dummy; } ;
typedef int RIOZipFileObj ;


 int * FUNC_0 (char const*,char const*,struct zip_stat*,int ,int,int) ;
 struct zip* FUNC_1 (char const*,int ,int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct zip*) ;
 scalar_t__ FUNC_5 (struct zip*) ;
 int FUNC_6 (struct zip*,scalar_t__,int ,struct zip_stat*) ;
 int FUNC_7 (struct zip_stat*) ;

RIOZipFileObj* FUNC_8(const char *VAR_0, const char *VAR_1, ut32 VAR_2, int VAR_3, int VAR_4) {
 RIOZipFileObj *VAR_5 = ((void*)0);
 ut64 VAR_6, VAR_7;
 struct zip_stat VAR_8;
 struct zip *VAR_9 = FUNC_1 (VAR_0, VAR_2, VAR_3, VAR_4);
 if (!VAR_9) {
  return ((void*)0);
 }
 VAR_7 = FUNC_5 (VAR_9);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_7 (&VAR_8);
  FUNC_6 (VAR_9, VAR_6, 0, &VAR_8);
  if (VAR_8.name != ((void*)0)) {
   if (FUNC_3 (VAR_8.name, VAR_1) == 0) {
    VAR_5 = FUNC_0 (
     VAR_0, VAR_1, &VAR_8,
     VAR_2, VAR_3, VAR_4);
    FUNC_2 (VAR_5);
    break;
   }
  }
 }
 if (!VAR_5) {
  VAR_5 = FUNC_0 (VAR_0,
   VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4);
 }
 FUNC_4 (VAR_9);
 return VAR_5;
}
