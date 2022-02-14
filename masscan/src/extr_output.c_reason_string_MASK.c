
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (char*) ;

const char *
FUNC_2(int VAR_0, char *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_1, VAR_2, "%s%s%s%s%s%s%s%s",
        (VAR_0&0x01)?"fin-":"",
        (VAR_0&0x02)?"syn-":"",
        (VAR_0&0x04)?"rst-":"",
        (VAR_0&0x08)?"psh-":"",
        (VAR_0&0x10)?"ack-":"",
        (VAR_0&0x20)?"urg-":"",
        (VAR_0&0x40)?"ece-":"",
        (VAR_0&0x80)?"cwr-":""
        );
    if (VAR_1[0] == '\0')
        return "none";
    else
        VAR_1[FUNC_1(VAR_1)-1] = '\0';
    return VAR_1;
}
