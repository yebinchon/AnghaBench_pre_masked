
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
typedef TYPE_1__ TrackItem ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const TrackItem *const *VAR_2 = (const TrackItem *const *) VAR_0;
 const TrackItem *const *VAR_3 = (const TrackItem *const *) VAR_1;

 return FUNC_0(&(*VAR_2)->key, &(*VAR_3)->key);
}
