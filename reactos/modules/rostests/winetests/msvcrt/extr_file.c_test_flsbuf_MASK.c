
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* _base; int _cnt; int _bufsiz; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;


 int FUNC_1 (char,TYPE_1__*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 int FUNC_6 (char,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *,int const,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( void )
{
  char* VAR_1;
  FILE *VAR_2;
  int VAR_3;
  int VAR_4;
  int VAR_5;
  static const int VAR_6[] = {129,128};

  VAR_1=FUNC_2(".","wne");
  for (VAR_5=0; VAR_5 < FUNC_0(VAR_6); VAR_5++)
  {
    VAR_2 = FUNC_5(VAR_1,"wb");
    FUNC_10(VAR_2,((void*)0),VAR_6[VAR_5],2048);
    VAR_4 = FUNC_1(0,VAR_2);
    FUNC_8(0 == VAR_4, "_flsbuf(0,tempfh) with bufmode %x expected %x got %x\n",
                         VAR_6[VAR_5], 0, VAR_4);
    VAR_4 = FUNC_1(0xff,VAR_2);
    FUNC_8(0xff == VAR_4, "_flsbuf(0xff,tempfh) with bufmode %x expected %x got %x\n",
                         VAR_6[VAR_5], 0xff, VAR_4);
    VAR_4 = FUNC_1(0xffffffff,VAR_2);
    FUNC_8(0xff == VAR_4, "_flsbuf(0xffffffff,tempfh) with bufmode %x expected %x got %x\n",
                         VAR_6[VAR_5], 0xff, VAR_4);
    if(VAR_2->_base) {
        FUNC_6('x', VAR_2);
        VAR_2->_cnt = -1;
        VAR_2->_base[1] = 'a';
        VAR_4 = FUNC_1(0xab,VAR_2);
        FUNC_8(VAR_4 == 0xab, "_flsbuf(0xab,tempfh) with bufmode %x expected 0xab got %x\n",
                VAR_6[VAR_5], VAR_4);
        FUNC_8(VAR_2->_base[1] == 'a', "tempfh->_base[1] should not be changed (%d)\n",
                VAR_2->_base[1]);
    }

    FUNC_3(VAR_2);
  }

  VAR_2 = FUNC_5(VAR_1,"rb");
  VAR_4 = FUNC_1(0,VAR_2);
  FUNC_8(VAR_0 == VAR_4, "_flsbuf(0,tempfh) on r/o file expected %x got %x\n", VAR_0, VAR_4);
  FUNC_3(VAR_2);


  VAR_2 = FUNC_5(VAR_1,"w");
  FUNC_8(VAR_2->_cnt == 0, "_cnt on freshly opened file was %d\n", VAR_2->_cnt);
  FUNC_9(VAR_2, ((void*)0));
  FUNC_8(VAR_2->_cnt == 0, "_cnt on unbuffered file was %d\n", VAR_2->_cnt);
  FUNC_8(VAR_2->_bufsiz == 2, "_bufsiz = %d\n", VAR_2->_bufsiz);

  VAR_2->_cnt = 1234;
  VAR_4 = FUNC_1('Q',VAR_2);
  FUNC_8('Q' == VAR_4, "_flsbuf('Q',tempfh) expected %x got %x\n", 'Q', VAR_4);

  FUNC_8(VAR_2->_cnt == 0, "after unbuf _flsbuf, _cnt was %d\n", VAR_2->_cnt);
  FUNC_3(VAR_2);

  VAR_2 = FUNC_5(VAR_1,"r");
  VAR_3 = FUNC_4(VAR_2);
  FUNC_8(VAR_3 == 'Q', "first byte should be 'Q'\n");
  VAR_3 = FUNC_4(VAR_2);
  FUNC_8(VAR_3 == VAR_0, "there should only be one byte\n");
  FUNC_3(VAR_2);

  FUNC_11(VAR_1);
  FUNC_7(VAR_1);
}
