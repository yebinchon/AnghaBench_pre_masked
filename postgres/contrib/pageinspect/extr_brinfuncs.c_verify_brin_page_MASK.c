
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int bytea ;
typedef int Page ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static Page
FUNC_7(bytea *VAR_4, uint16 VAR_5, const char *VAR_6)
{
 Page VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4) - VAR_3;

 if (VAR_8 != VAR_0)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("input page too small"),
     FUNC_5("Expected size %d, got %d",
         VAR_0, VAR_8)));

 VAR_7 = FUNC_1(VAR_4);


 if (FUNC_0(VAR_7) != VAR_5)
  FUNC_3(VAR_2,
    (FUNC_4(VAR_1),
     FUNC_6("page is not a BRIN page of type \"%s\"", VAR_6),
     FUNC_5("Expected special type %08x, got %08x.",
         VAR_5, FUNC_0(VAR_7))));

 return VAR_7;
}
