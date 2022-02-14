
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int re; } ;
struct cvec {scalar_t__ nchrs; scalar_t__ chrspace; } ;
typedef scalar_t__ chr ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct cvec*,scalar_t__) ;
 int FUNC_4 (struct cvec*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct cvec* FUNC_6 (struct vars*,int,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static struct cvec *
FUNC_9(struct vars *VAR_3,
   chr VAR_4,
   chr VAR_5,
   int VAR_6)
{
 int VAR_7;
 struct cvec *VAR_8;
 chr VAR_9,
    VAR_10;

 if (VAR_4 != VAR_5 && !FUNC_5(VAR_4, VAR_5))
 {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 if (!VAR_6)
 {
  VAR_8 = FUNC_6(VAR_3, 0, 1);
  FUNC_2();
  FUNC_4(VAR_8, VAR_4, VAR_5);
  return VAR_8;
 }
 VAR_7 = VAR_5 - VAR_4 + 1;
 if (VAR_7 <= 0 || VAR_7 > 100000)
  VAR_7 = 100000;

 VAR_8 = FUNC_6(VAR_3, VAR_7, 1);
 FUNC_2();
 FUNC_4(VAR_8, VAR_4, VAR_5);

 for (VAR_9 = VAR_4; VAR_9 <= VAR_5; VAR_9++)
 {
  VAR_10 = FUNC_7(VAR_9);
  if (VAR_10 != VAR_9 &&
   (FUNC_5(VAR_10, VAR_4) || FUNC_5(VAR_5, VAR_10)))
  {
   if (VAR_8->nchrs >= VAR_8->chrspace)
   {
    FUNC_1(VAR_2);
    return ((void*)0);
   }
   FUNC_3(VAR_8, VAR_10);
  }
  VAR_10 = FUNC_8(VAR_9);
  if (VAR_10 != VAR_9 &&
   (FUNC_5(VAR_10, VAR_4) || FUNC_5(VAR_5, VAR_10)))
  {
   if (VAR_8->nchrs >= VAR_8->chrspace)
   {
    FUNC_1(VAR_2);
    return ((void*)0);
   }
   FUNC_3(VAR_8, VAR_10);
  }
  if (FUNC_0(VAR_3->re))
  {
   FUNC_1(VAR_0);
   return ((void*)0);
  }
 }

 return VAR_8;
}
