
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int isnull; int attr; int len; int entries; int dontcare; } ;
struct TYPE_6__ {int spl_nright; int spl_right; int spl_nleft; int spl_left; } ;
struct TYPE_7__ {int spl_risnull; int spl_rattr; TYPE_1__ splitVector; int spl_lisnull; int spl_lattr; int spl_dontcare; } ;
typedef int IndexTuple ;
typedef TYPE_2__ GistSplitVector ;
typedef TYPE_3__ GistSplitUnion ;
typedef int GISTSTATE ;


 int FUNC_0 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(GISTSTATE *VAR_0, IndexTuple *VAR_1, GistSplitVector *VAR_2)
{
 GistSplitUnion VAR_3;

 VAR_3.dontcare = VAR_2->spl_dontcare;

 VAR_3.entries = VAR_2->splitVector.spl_left;
 VAR_3.len = VAR_2->splitVector.spl_nleft;
 VAR_3.attr = VAR_2->spl_lattr;
 VAR_3.isnull = VAR_2->spl_lisnull;

 FUNC_0(VAR_0, VAR_1, &VAR_3);

 VAR_3.entries = VAR_2->splitVector.spl_right;
 VAR_3.len = VAR_2->splitVector.spl_nright;
 VAR_3.attr = VAR_2->spl_rattr;
 VAR_3.isnull = VAR_2->spl_risnull;

 FUNC_0(VAR_0, VAR_1, &VAR_3);
}
