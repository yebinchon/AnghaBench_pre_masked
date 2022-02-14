
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XmlReadState ;
__attribute__((used)) static const char *FUNC_0(XmlReadState VAR_0)
{
    static const char* VAR_1[] = {
        "XmlReadState_Initial",
        "XmlReadState_Interactive",
        "XmlReadState_Error",
        "XmlReadState_EndOfFile",
        "XmlReadState_Closed"
    };

    static const char VAR_2[] = "unknown";

    switch (VAR_0)
    {
    case 129:
    case 128:
    case 130:
    case 131:
    case 132:
        return VAR_1[VAR_0];
    default:
        return VAR_2;
    }
}
