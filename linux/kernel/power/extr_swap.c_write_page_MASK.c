
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hib_bio_batch {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,void*) ;
 int FUNC_3 (int ,int ,int ,void*,struct hib_bio_batch*) ;
 int FUNC_4 (struct hib_bio_batch*) ;

__attribute__((used)) static int FUNC_5(void *VAR_6, sector_t VAR_7, struct hib_bio_batch *VAR_8)
{
 void *VAR_9;
 int VAR_10;

 if (!VAR_7)
  return -VAR_0;

 if (VAR_8) {
  VAR_9 = (void *)FUNC_1(VAR_1 | VAR_5 |
                                VAR_4);
  if (VAR_9) {
   FUNC_2(VAR_9, VAR_6);
  } else {
   VAR_10 = FUNC_4(VAR_8);
   if (VAR_10)
    return VAR_10;
   VAR_9 = (void *)FUNC_1(VAR_1 |
                                 VAR_5 |
                                 VAR_4);
   if (VAR_9) {
    FUNC_2(VAR_9, VAR_6);
   } else {
    FUNC_0(1);
    VAR_8 = ((void*)0);
    VAR_9 = VAR_6;
   }
  }
 } else {
  VAR_9 = VAR_6;
 }
 return FUNC_3(VAR_2, VAR_3, VAR_7, VAR_9, VAR_8);
}
