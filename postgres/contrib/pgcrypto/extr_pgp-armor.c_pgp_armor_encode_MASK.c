
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_7__ {char* data; int len; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (int const*,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (int const*,unsigned int,int *) ;

void
FUNC_8(const uint8 *VAR_4, unsigned VAR_5, StringInfo VAR_6,
     int VAR_7, char **VAR_8, char **VAR_9)
{
 int VAR_10;
 int VAR_11;
 unsigned VAR_12;
 unsigned VAR_13 = FUNC_3(VAR_4, VAR_5);

 FUNC_2(VAR_6, VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_0(VAR_6, "%s: %s\n", VAR_8[VAR_10], VAR_9[VAR_10]);
 FUNC_1(VAR_6, '\n');


 VAR_12 = FUNC_6(VAR_5);
 FUNC_5(VAR_6, (int) VAR_12);

 VAR_11 = FUNC_7(VAR_4, VAR_5, (uint8 *) VAR_6->data + VAR_6->len);
 if (VAR_11 > VAR_12)
  FUNC_4(VAR_0, "overflow - encode estimate too small");
 VAR_6->len += VAR_11;

 if (*(VAR_6->data + VAR_6->len - 1) != '\n')
  FUNC_1(VAR_6, '\n');

 FUNC_1(VAR_6, '=');
 FUNC_1(VAR_6, VAR_1[(VAR_13 >> 18) & 0x3f]);
 FUNC_1(VAR_6, VAR_1[(VAR_13 >> 12) & 0x3f]);
 FUNC_1(VAR_6, VAR_1[(VAR_13 >> 6) & 0x3f]);
 FUNC_1(VAR_6, VAR_1[VAR_13 & 0x3f]);

 FUNC_2(VAR_6, VAR_2);
}
