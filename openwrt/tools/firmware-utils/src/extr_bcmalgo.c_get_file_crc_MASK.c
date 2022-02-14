
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stat {scalar_t__ st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,scalar_t__,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,struct stat*) ;

uint32_t FUNC_7 ( char* VAR_0 )
{
 struct stat VAR_1;
 FUNC_6 ( VAR_0,&VAR_1 );
 char* VAR_2 = FUNC_5 ( VAR_1.st_size+10 );
 FILE* VAR_3 = FUNC_1 ( VAR_0,"r" );
 FUNC_2 ( VAR_2, 1, VAR_1.st_size,VAR_3 );
 FUNC_0 ( VAR_3 );
 uint32_t VAR_4 = FUNC_4 ( VAR_2,VAR_1.st_size );
 FUNC_3 ( VAR_2 );
 return VAR_4;
}
