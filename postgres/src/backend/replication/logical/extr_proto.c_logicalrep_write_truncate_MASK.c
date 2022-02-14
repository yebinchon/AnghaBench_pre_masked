
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int StringInfo ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(StringInfo VAR_2,
        int VAR_3,
        Oid VAR_4[],
        bool VAR_5, bool VAR_6)
{
 int VAR_7;
 uint8 VAR_8 = 0;

 FUNC_0(VAR_2, 'T');

 FUNC_1(VAR_2, VAR_3);


 if (VAR_5)
  VAR_8 |= VAR_0;
 if (VAR_6)
  VAR_8 |= VAR_1;
 FUNC_2(VAR_2, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_1(VAR_2, VAR_4[VAR_7]);
}
