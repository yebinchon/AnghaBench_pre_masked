
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_4) {
        int VAR_5 = 0;

        FUNC_0(VAR_4);

        for (; *VAR_4; VAR_4++)
                switch(*VAR_4) {
                case 'r':
                        VAR_5 |= VAR_1;
                        break;
                case 'w':
                        VAR_5 |= VAR_2;
                        break;
                case 'm':
                        VAR_5 |= VAR_0;
                        break;
                default:
                        return -VAR_3;
                }

        return VAR_5;
}
