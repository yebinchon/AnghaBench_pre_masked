
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_protocol {size_t id; int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct nfc_protocol const** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(const struct nfc_protocol *VAR_5)
{
 int VAR_6;

 if (VAR_5->id < 0 || VAR_5->id >= VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_5->proto, 0);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_4);
 if (VAR_3[VAR_5->id])
  VAR_6 = -VAR_0;
 else
  VAR_3[VAR_5->id] = VAR_5;
 FUNC_2(&VAR_4);

 return VAR_6;
}
