
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UTHashTable ;
typedef int MMRect ;
typedef int MMPoint ;
typedef int MMBitmapRef ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ,float,int ,int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(MMBitmapRef VAR_1,
               MMBitmapRef VAR_2,
                     MMPoint *VAR_3,
                     MMRect VAR_4,
                     float VAR_5)
{
 UTHashTable VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, VAR_1);
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4,
                          VAR_5, VAR_0, &VAR_6);
 FUNC_0(&VAR_6);
 return VAR_7;
}
