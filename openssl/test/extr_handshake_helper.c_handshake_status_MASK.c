
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int peer_status_t ;
typedef int handshake_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;

__attribute__((used)) static handshake_status_t FUNC_0(peer_status_t VAR_5,
                                           peer_status_t VAR_6,
                                           int VAR_7)
{
    switch (VAR_5) {
    case 129:
        return VAR_3;

    case 128:

        return VAR_3;

    case 130:
        switch (VAR_6) {
        case 129:
            return VAR_3;
        case 130:

            return VAR_2;
        case 128:
        case 131:

            return VAR_1;
        case 132:




            return VAR_3;
        }
        break;

    case 131:
        return VAR_1;

    case 132:
        switch (VAR_6) {
        case 129:
            return VAR_3;
        case 128:

            return VAR_7 ? VAR_0 : VAR_3;
        case 130:







            return VAR_7 ? VAR_0 : VAR_4;
        case 131:

            return VAR_1;
        case 132:

            return VAR_7 ? VAR_4 : VAR_0;
        }
    }

    return VAR_3;
}
