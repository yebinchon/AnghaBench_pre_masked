
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Size ;
typedef int PageHeader ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

Size
FUNC_6(Page VAR_2)
{
 Size VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 > 0)
 {
  OffsetNumber VAR_4,
     VAR_5;




  VAR_5 = FUNC_4(VAR_2);
  if (VAR_5 >= VAR_1)
  {
   if (FUNC_5((PageHeader) VAR_2))
   {




    for (VAR_4 = VAR_0; VAR_4 <= VAR_5; VAR_4 = FUNC_1(VAR_4))
    {
     ItemId VAR_6 = FUNC_3(VAR_2, VAR_4);

     if (!FUNC_0(VAR_6))
      break;
    }

    if (VAR_4 > VAR_5)
    {




     VAR_3 = 0;
    }
   }
   else
   {




    VAR_3 = 0;
   }
  }
 }
 return VAR_3;
}
