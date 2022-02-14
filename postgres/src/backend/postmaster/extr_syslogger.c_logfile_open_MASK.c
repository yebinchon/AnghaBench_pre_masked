
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int VAR_9 ;
 int * FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static FILE *
FUNC_8(const char *VAR_10, const char *VAR_11, bool VAR_12)
{
 FILE *VAR_13;
 mode_t VAR_14;





 VAR_14 = FUNC_7((mode_t) ((~(VAR_2 | VAR_7)) & (VAR_6 | VAR_4 | VAR_5)));
 VAR_13 = FUNC_5(VAR_10, VAR_11);
 FUNC_7(VAR_14);

 if (VAR_13)
 {
  FUNC_6(VAR_13, ((void*)0), VAR_3, 0);





 }
 else
 {
  int VAR_15 = VAR_9;

  FUNC_2(VAR_12 ? VAR_1 : VAR_0,
    (FUNC_3(),
     FUNC_4("could not open log file \"%s\": %m",
      VAR_10)));
  VAR_9 = VAR_15;
 }

 return VAR_13;
}
