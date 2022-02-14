
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int rid; TYPE_6__* ip; int dirn; int ia5; TYPE_5__* otherName; } ;
struct TYPE_17__ {int type; TYPE_7__ d; } ;
struct TYPE_15__ {unsigned char* data; int length; } ;
struct TYPE_14__ {TYPE_4__* value; int type_id; } ;
struct TYPE_12__ {TYPE_2__* utf8string; TYPE_1__* ia5string; } ;
struct TYPE_13__ {TYPE_3__ value; int type; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_8__ GENERAL_NAME ;
typedef int BIO ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(BIO *VAR_3, GENERAL_NAME *VAR_4)
{
    unsigned char *VAR_5;
    int VAR_6, VAR_7;

    switch (VAR_4->type) {
    case 135:
        VAR_7 = FUNC_2(VAR_4->d.otherName->type_id);

        if ((VAR_7 == 131
             && VAR_4->d.otherName->value->type != VAR_0)
                || (VAR_7 != 131
                    && VAR_4->d.otherName->value->type != VAR_1)) {
            FUNC_1(VAR_3, "othername:<unsupported>");
            break;
        }

        switch (VAR_7) {
        case 129:
            FUNC_1(VAR_3, "othername:SmtpUTF8Mailbox:%s",
                       VAR_4->d.otherName->value->value.utf8string->data);
            break;
        case 130:
            FUNC_1(VAR_3, "othername:XmppAddr:%s",
                       VAR_4->d.otherName->value->value.utf8string->data);
            break;
        case 131:
            FUNC_1(VAR_3, "othername:SRVName:%s",
                       VAR_4->d.otherName->value->value.ia5string->data);
            break;
        case 128:
            FUNC_1(VAR_3, "othername:UPN:%s",
                       VAR_4->d.otherName->value->value.utf8string->data);
            break;
        default:
            FUNC_1(VAR_3, "othername:<unsupported>");
            break;
        }
        break;

    case 132:
        FUNC_1(VAR_3, "X400Name:<unsupported>");
        break;

    case 138:

        FUNC_1(VAR_3, "EdiPartyName:<unsupported>");
        break;

    case 137:
        FUNC_1(VAR_3, "email:");
        FUNC_0(VAR_3, VAR_4->d.ia5);
        break;

    case 139:
        FUNC_1(VAR_3, "DNS:");
        FUNC_0(VAR_3, VAR_4->d.ia5);
        break;

    case 133:
        FUNC_1(VAR_3, "URI:");
        FUNC_0(VAR_3, VAR_4->d.ia5);
        break;

    case 140:
        FUNC_1(VAR_3, "DirName:");
        FUNC_3(VAR_3, VAR_4->d.dirn, 0, VAR_2);
        break;

    case 136:
        VAR_5 = VAR_4->d.ip->data;
        if (VAR_4->d.ip->length == 4)
            FUNC_1(VAR_3, "IP Address:%d.%d.%d.%d", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
        else if (VAR_4->d.ip->length == 16) {
            FUNC_1(VAR_3, "IP Address");
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                FUNC_1(VAR_3, ":%X", VAR_5[0] << 8 | VAR_5[1]);
                VAR_5 += 2;
            }
        } else {
            FUNC_1(VAR_3, "IP Address:<invalid>");
            break;
        }
        break;

    case 134:
        FUNC_1(VAR_3, "Registered ID:");
        FUNC_4(VAR_3, VAR_4->d.rid);
        break;
    }
    return 1;
}
