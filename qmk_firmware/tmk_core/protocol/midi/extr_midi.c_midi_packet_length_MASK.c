
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int midi_packet_length_t ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

midi_packet_length_t FUNC_0(uint8_t VAR_4) {
    switch (VAR_4 & 0xF0) {
        case 145:
        case 140:
        case 141:
        case 146:
        case 139:
            return VAR_1;
        case 138:
        case 144:
        case 135:
            return VAR_2;
        case 0xF0:
            switch (VAR_4) {
                case 143:
                case 131:
                case 134:
                case 142:
                case 133:
                case 147:
                case 137:
                case 130:
                    return VAR_0;
                case 136:
                    return VAR_1;
                case 132:
                case 135:
                    return VAR_2;
                case 128:
                case 129:
                default:
                    return VAR_3;
            }
        default:
            return VAR_3;
    }
}
