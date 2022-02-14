
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tempfilepath ;
typedef int Oid ;
typedef scalar_t__ File ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,char*,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static File
FUNC_5(Oid VAR_9, bool VAR_10)
{
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];
 File VAR_13;

 FUNC_2(VAR_11, VAR_9);





 FUNC_4(VAR_12, sizeof(VAR_12), "%s/%s%d.%ld",
    VAR_11, VAR_7, VAR_2, VAR_8++);





 VAR_13 = FUNC_1(VAR_12,
       VAR_4 | VAR_3 | VAR_5 | VAR_6);
 if (VAR_13 <= 0)
 {
  (void) FUNC_0(VAR_11);

  VAR_13 = FUNC_1(VAR_12,
        VAR_4 | VAR_3 | VAR_5 | VAR_6);
  if (VAR_13 <= 0 && VAR_10)
   FUNC_3(VAR_0, "could not create temporary file \"%s\": %m",
     VAR_12);
 }

 return VAR_13;
}
