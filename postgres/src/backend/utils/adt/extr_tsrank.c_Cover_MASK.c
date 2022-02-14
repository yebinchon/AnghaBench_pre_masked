
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pos; scalar_t__ p; scalar_t__ q; TYPE_2__* begin; TYPE_2__* end; } ;
struct TYPE_11__ {int pos; } ;
struct TYPE_10__ {int query; } ;
typedef TYPE_1__ QueryRepresentation ;
typedef TYPE_2__ DocRepresentation ;
typedef TYPE_3__ CoverExt ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_6(DocRepresentation *VAR_4, int VAR_5, QueryRepresentation *VAR_6, CoverExt *VAR_7)
{
 DocRepresentation *VAR_8;
 int VAR_9 = VAR_7->pos;
 bool VAR_10 = 0;





 FUNC_3();

 FUNC_5(VAR_6, 0);

 VAR_7->p = VAR_0;
 VAR_7->q = 0;
 VAR_8 = VAR_4 + VAR_7->pos;


 while (VAR_8 - VAR_4 < VAR_5)
 {
  FUNC_4(VAR_6, VAR_8);

  if (FUNC_1(FUNC_0(VAR_6->query), (void *) VAR_6,
        VAR_2, VAR_3))
  {
   if (FUNC_2(VAR_8->pos) > VAR_7->q)
   {
    VAR_7->q = FUNC_2(VAR_8->pos);
    VAR_7->end = VAR_8;
    VAR_9 = VAR_8 - VAR_4;
    VAR_10 = 1;
   }
   break;
  }
  VAR_8++;
 }

 if (!VAR_10)
  return 0;

 FUNC_5(VAR_6, 1);

 VAR_8 = VAR_4 + VAR_9;


 while (VAR_8 >= VAR_4 + VAR_7->pos)
 {



  FUNC_4(VAR_6, VAR_8);

  if (FUNC_1(FUNC_0(VAR_6->query), (void *) VAR_6,
        VAR_1, VAR_3))
  {
   if (FUNC_2(VAR_8->pos) < VAR_7->p)
   {
    VAR_7->begin = VAR_8;
    VAR_7->p = FUNC_2(VAR_8->pos);
   }
   break;
  }
  VAR_8--;
 }

 if (VAR_7->p <= VAR_7->q)
 {




  VAR_7->pos = (VAR_8 - VAR_4) + 1;
  return 1;
 }

 VAR_7->pos++;
 return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);
}
