
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int keysize; int entrysize; scalar_t__ collisions; scalar_t__ accesses; int sshift; int ssize; int max_dsize; int ffactor; scalar_t__ num_partitions; scalar_t__ nsegs; int dsize; } ;
struct TYPE_5__ {TYPE_2__* hctl; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ HASHHDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(HTAB *VAR_5)
{
 HASHHDR *VAR_6 = VAR_5->hctl;

 FUNC_0(VAR_6, 0, sizeof(HASHHDR));

 VAR_6->dsize = VAR_0;
 VAR_6->nsegs = 0;


 VAR_6->keysize = sizeof(char *);
 VAR_6->entrysize = 2 * sizeof(char *);

 VAR_6->num_partitions = 0;

 VAR_6->ffactor = VAR_1;


 VAR_6->max_dsize = VAR_4;

 VAR_6->ssize = VAR_2;
 VAR_6->sshift = VAR_3;




}
