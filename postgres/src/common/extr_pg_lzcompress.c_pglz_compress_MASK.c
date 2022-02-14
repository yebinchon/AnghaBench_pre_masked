
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_4__ {scalar_t__ match_size_good; int min_input_size; int max_input_size; int match_size_drop; int min_comp_rate; int first_success_by; } ;
typedef TYPE_1__ PGLZ_Strategy ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,char const*,char const*,int*,int*,int,int,int) ;
 int FUNC_2 (int ,int ,int,int,char const*,char const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char,unsigned char,unsigned char*,char const) ;
 int FUNC_4 (unsigned char*,unsigned char,unsigned char,unsigned char*,int,int) ;

int32
FUNC_5(const char *VAR_5, int32 VAR_6, char *VAR_7,
     const PGLZ_Strategy *VAR_8)
{
 unsigned char *VAR_9 = (unsigned char *) VAR_7;
 unsigned char *VAR_10 = VAR_9;
 int VAR_11 = 1;
 bool VAR_12 = 0;
 const char *VAR_13 = VAR_5;
 const char *VAR_14 = VAR_5 + VAR_6;
 unsigned char VAR_15 = 0;
 unsigned char *VAR_16 = &VAR_15;
 unsigned char VAR_17 = 0;
 unsigned char VAR_18 = 0;
 bool VAR_19 = 0;
 int32 VAR_20;
 int32 VAR_21;
 int32 VAR_22;
 int32 VAR_23;
 int32 VAR_24;
 int32 VAR_25;
 int32 VAR_26;
 int VAR_27;
 int VAR_28;




 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_2;





 if (VAR_8->match_size_good <= 0 ||
  VAR_6 < VAR_8->min_input_size ||
  VAR_6 > VAR_8->max_input_size)
  return -1;




 VAR_22 = VAR_8->match_size_good;
 if (VAR_22 > VAR_1)
  VAR_22 = VAR_1;
 else if (VAR_22 < 17)
  VAR_22 = 17;

 VAR_23 = VAR_8->match_size_drop;
 if (VAR_23 < 0)
  VAR_23 = 0;
 else if (VAR_23 > 100)
  VAR_23 = 100;

 VAR_26 = VAR_8->min_comp_rate;
 if (VAR_26 < 0)
  VAR_26 = 0;
 else if (VAR_26 > 99)
  VAR_26 = 99;






 if (VAR_6 > (VAR_0 / 100))
 {

  VAR_25 = (VAR_6 / 100) * (100 - VAR_26);
 }
 else
  VAR_25 = (VAR_6 * (100 - VAR_26)) / 100;







 if (VAR_6 < 128)
  VAR_27 = 512;
 else if (VAR_6 < 256)
  VAR_27 = 1024;
 else if (VAR_6 < 512)
  VAR_27 = 2048;
 else if (VAR_6 < 1024)
  VAR_27 = 4096;
 else
  VAR_27 = 8192;
 VAR_28 = VAR_27 - 1;





 FUNC_0(VAR_4, 0, VAR_27 * sizeof(int16));




 while (VAR_13 < VAR_14)
 {







  if (VAR_9 - VAR_10 >= VAR_25)
   return -1;







  if (!VAR_19 && VAR_9 - VAR_10 >= VAR_8->first_success_by)
   return -1;




  if (FUNC_1(VAR_4, VAR_13, VAR_14, &VAR_20,
       &VAR_21, VAR_22, VAR_23, VAR_28))
  {




   FUNC_4(VAR_16, VAR_17, VAR_18, VAR_9, VAR_20, VAR_21);
   while (VAR_20--)
   {
    FUNC_2(VAR_4, VAR_3,
         VAR_11, VAR_12,
         VAR_13, VAR_14, VAR_28);
    VAR_13++;

   }
   VAR_19 = 1;
  }
  else
  {



   FUNC_3(VAR_16, VAR_17, VAR_18, VAR_9, *VAR_13);
   FUNC_2(VAR_4, VAR_3,
        VAR_11, VAR_12,
        VAR_13, VAR_14, VAR_28);
   VAR_13++;

  }
 }





 *VAR_16 = VAR_17;
 VAR_24 = VAR_9 - VAR_10;
 if (VAR_24 >= VAR_25)
  return -1;


 return VAR_24;
}
