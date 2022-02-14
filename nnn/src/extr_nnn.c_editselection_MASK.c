
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int,struct stat*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ) ;
 char* VAR_9 ;
 size_t FUNC_6 (int,char*,int ) ;
 int FUNC_7 () ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ,int *,int *,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_12(void)
{
 bool VAR_12 = VAR_0;
 int VAR_13, VAR_14 = 0;
 ssize_t VAR_15;
 struct stat VAR_16;

 if (!VAR_11) {
  FUNC_0("empty selection");
  return VAR_0;
 }

 VAR_13 = FUNC_3();
 if (VAR_13 == -1) {
  FUNC_0("couldn't create tmp file");
  return VAR_0;
 }

 FUNC_8(VAR_13, ((void*)0));
 FUNC_2(VAR_13);

 FUNC_9(VAR_6, VAR_7, ((void*)0), ((void*)0), VAR_1);

 VAR_13 = FUNC_5(VAR_7, VAR_3);
 if (VAR_13 == -1) {
  FUNC_0("couldn't read tmp file");
  FUNC_10(VAR_7);
  return VAR_0;
 }

 FUNC_4(VAR_13, &VAR_16);

 if (VAR_16.st_size > VAR_11) {
  FUNC_0("edited buffer larger than pervious");
  goto emptyedit;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_9, VAR_10);
 FUNC_2(VAR_13);
 FUNC_10(VAR_7);

 if (!VAR_15) {
  VAR_12 = VAR_4;
  goto emptyedit;
 }

 if (VAR_15 < 0) {
  FUNC_0("error reading tmp file");
  goto emptyedit;
 }

 FUNC_7();
 VAR_11 = VAR_15;

 VAR_9[--VAR_15] = '\0';
 for (--VAR_15; VAR_15 > 0; --VAR_15) {

  if (VAR_9[VAR_15] == '\n' && VAR_9[VAR_15 + 1] == '/') {
   ++VAR_14;
   VAR_9[VAR_15] = '\0';
  }
 }


 ++VAR_14;

 if (VAR_14 > VAR_8) {
  FUNC_0("files added to selection");
  goto emptyedit;
 }

 VAR_8 = VAR_14;
 FUNC_11(VAR_9, VAR_11 - 1);
 FUNC_9(VAR_5, ((void*)0), ((void*)0), ((void*)0), VAR_2);

 return VAR_4;

emptyedit:
 FUNC_7();
 FUNC_1();
 return VAR_12;
}
