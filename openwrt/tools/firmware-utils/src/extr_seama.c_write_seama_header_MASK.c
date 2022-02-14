
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {void* size; int metasize; scalar_t__ reserved; void* magic; } ;
typedef TYPE_1__ seamahdr_t ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,int,int,int *) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static size_t FUNC_5(FILE * VAR_1, char * VAR_2[], size_t VAR_3, size_t VAR_4)
{
 seamahdr_t VAR_5;
 size_t VAR_6;
 uint16_t VAR_7 = 0;


 for (VAR_6=0; VAR_6<VAR_3; VAR_6++) VAR_7 += (FUNC_3(VAR_2[VAR_6]) + 1);

 VAR_7 = ((VAR_7+3)/4)*4;
 FUNC_4("SEAMA META : %d bytes\n", VAR_7);


 VAR_5.magic = FUNC_1(VAR_0);
 VAR_5.reserved = 0;
 VAR_5.metasize = FUNC_2(VAR_7);
 VAR_5.size = FUNC_1(VAR_4);


 return FUNC_0(&VAR_5, sizeof(seamahdr_t), 1, VAR_1);
}
