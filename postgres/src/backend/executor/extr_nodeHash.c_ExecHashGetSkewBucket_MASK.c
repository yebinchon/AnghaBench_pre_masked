
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int skewBucketLen; TYPE_1__** skewBucket; int skewEnabled; } ;
struct TYPE_4__ {int hashvalue; } ;
typedef TYPE_2__* HashJoinTable ;


 int VAR_0 ;

int
FUNC_0(HashJoinTable VAR_1, uint32 VAR_2)
{
 int VAR_3;





 if (!VAR_1->skewEnabled)
  return VAR_0;




 VAR_3 = VAR_2 & (VAR_1->skewBucketLen - 1);






 while (VAR_1->skewBucket[VAR_3] != ((void*)0) &&
     VAR_1->skewBucket[VAR_3]->hashvalue != VAR_2)
  VAR_3 = (VAR_3 + 1) & (VAR_1->skewBucketLen - 1);




 if (VAR_1->skewBucket[VAR_3] != ((void*)0))
  return VAR_3;




 return VAR_0;
}
