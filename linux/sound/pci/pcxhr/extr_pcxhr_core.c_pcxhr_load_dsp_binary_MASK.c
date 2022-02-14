
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dummy; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcxhr_mgr*,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_1 (struct pcxhr_mgr*,struct firmware const*) ;
 int FUNC_2 (struct pcxhr_mgr*,int ,int ) ;

int FUNC_3(struct pcxhr_mgr *VAR_5, const struct firmware *VAR_6)
{
 int VAR_7;
 unsigned char VAR_8;
 VAR_7 = FUNC_2(VAR_5, VAR_3, 0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5, VAR_2, 0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_5, VAR_0,
       VAR_1,
       VAR_1,
       VAR_4, &VAR_8);
}
