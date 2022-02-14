
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hdsp {int dds_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hdsp*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hdsp *VAR_2, int VAR_3)
{
 u64 VAR_4;

 if (VAR_3 >= 112000)
  VAR_3 /= 4;
 else if (VAR_3 >= 56000)
  VAR_3 /= 2;

 VAR_4 = VAR_0;
 VAR_4 = FUNC_0(VAR_4, VAR_3);

 FUNC_2(VAR_4 >> 32);


 VAR_2->dds_value = VAR_4;
 FUNC_1(VAR_2, VAR_1, VAR_2->dds_value);
}
