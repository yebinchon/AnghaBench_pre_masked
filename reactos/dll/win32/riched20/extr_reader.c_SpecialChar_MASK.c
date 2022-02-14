
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int cbSize; } ;
struct TYPE_14__ {int rtfMinor; int rtfParam; int unicodeLength; TYPE_10__* editor; TYPE_2__ fmt; int rtfMajor; int rtfClass; } ;
struct TYPE_13__ {int bEmulateVersion10; } ;
typedef TYPE_1__ RTF_Info ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static void FUNC_10 (RTF_Info *VAR_2)
{
 switch (VAR_2->rtfMinor)
 {
 case 136:


  FUNC_4(VAR_2);
  if (VAR_2->rtfClass != VAR_0)
   FUNC_7(VAR_2);
  else
   FUNC_6(VAR_2);
  break;
 case 128:
 {
                int VAR_3;

                FUNC_5(VAR_2, VAR_2->rtfParam);


                for (VAR_3 = 0; VAR_3 < VAR_2->unicodeLength; VAR_3++)
                {
   FUNC_4(VAR_2);
                        if (VAR_2->rtfClass != VAR_1)
          {
                                FUNC_0("The token behind \\u is not text, but (%d,%d,%d)\n",
    VAR_2->rtfClass, VAR_2->rtfMajor, VAR_2->rtfMinor);
                                FUNC_8(VAR_2);
                                break;
                        }
  }
  break;
 }
 case 141:
            FUNC_3(VAR_2);
            FUNC_1(VAR_2->editor, 0);
            break;
 case 135:
 case 130:
 case 134:
                FUNC_3(VAR_2);
                FUNC_2(VAR_2->editor, &VAR_2->fmt);
                FUNC_9(&VAR_2->fmt, 0, sizeof(VAR_2->fmt));
                VAR_2->fmt.cbSize = sizeof(VAR_2->fmt);
  FUNC_5 (VAR_2, '\r');
  if (VAR_2->editor->bEmulateVersion10) FUNC_5 (VAR_2, '\n');
  break;
 case 139:
  FUNC_5 (VAR_2, 0x00A0);
  break;
 case 129:
  FUNC_5 (VAR_2, '\t');
  break;
 case 140:
  FUNC_5 (VAR_2, 0x2011);
  break;
 case 149:
  FUNC_5 (VAR_2, 0x2022);
  break;
 case 148:
  FUNC_5 (VAR_2, 0x2014);
  break;
 case 146:
  FUNC_5 (VAR_2, 0x2013);
  break;
        case 147:
                FUNC_5 (VAR_2, ' ');
                break;
        case 145:
                FUNC_5 (VAR_2, ' ');
                break;
 case 143:
  FUNC_5 (VAR_2, 0x2018);
  break;
 case 132:
  FUNC_5 (VAR_2, 0x2019);
  break;
 case 144:
  FUNC_5 (VAR_2, 0x201C);
  break;
 case 133:
  FUNC_5 (VAR_2, 0x201D);
  break;
        case 142:
                FUNC_5 (VAR_2, 0x200E);
                break;
        case 131:
                FUNC_5 (VAR_2, 0x200F);
                break;
        case 138:
                FUNC_5 (VAR_2, 0x200D);
                break;
        case 137:
                FUNC_5 (VAR_2, 0x200C);
                break;
 }
}
