
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int bytea ;
struct TYPE_5__ {int ndeps; int magic; int type; TYPE_1__** deps; } ;
struct TYPE_4__ {int nattributes; int degree; int* attributes; } ;
typedef int Size ;
typedef TYPE_1__ MVDependency ;
typedef TYPE_2__ MVDependencies ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int*,int) ;
 scalar_t__ FUNC_5 (int) ;

bytea *
FUNC_6(MVDependencies *VAR_2)
{
 int VAR_3;
 bytea *VAR_4;
 char *VAR_5;
 Size VAR_6;


 VAR_6 = VAR_1 + VAR_0;


 for (VAR_3 = 0; VAR_3 < VAR_2->ndeps; VAR_3++)
  VAR_6 += FUNC_2(VAR_2->deps[VAR_3]->nattributes);

 VAR_4 = (bytea *) FUNC_5(VAR_6);
 FUNC_1(VAR_4, VAR_6);

 VAR_5 = FUNC_3(VAR_4);


 FUNC_4(VAR_5, &VAR_2->magic, sizeof(uint32));
 VAR_5 += sizeof(uint32);
 FUNC_4(VAR_5, &VAR_2->type, sizeof(uint32));
 VAR_5 += sizeof(uint32);
 FUNC_4(VAR_5, &VAR_2->ndeps, sizeof(uint32));
 VAR_5 += sizeof(uint32);


 for (VAR_3 = 0; VAR_3 < VAR_2->ndeps; VAR_3++)
 {
  MVDependency *VAR_7 = VAR_2->deps[VAR_3];

  FUNC_4(VAR_5, &VAR_7->degree, sizeof(double));
  VAR_5 += sizeof(double);

  FUNC_4(VAR_5, &VAR_7->nattributes, sizeof(AttrNumber));
  VAR_5 += sizeof(AttrNumber);

  FUNC_4(VAR_5, VAR_7->attributes, sizeof(AttrNumber) * VAR_7->nattributes);
  VAR_5 += sizeof(AttrNumber) * VAR_7->nattributes;


  FUNC_0(VAR_5 <= ((char *) VAR_4 + VAR_6));
 }


 FUNC_0(VAR_5 == ((char *) VAR_4 + VAR_6));

 return VAR_4;
}
