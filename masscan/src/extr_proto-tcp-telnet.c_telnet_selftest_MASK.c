
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_2(void)
{
    struct {
        const char *input;
        const char *output;
    } VAR_1[] = {
        {"\xff\xfd\x1flogin:", "login"},
        {"\xff\xfd\x27\xff\xfd\x18 ", " "},
        {
            "\xff\xfb\x25\xff\xfd\x03\xff\xfb\x18\xff\xfb\x1f\xff\xfb\x20\xff" "\xfb\x21\xff\xfb\x22\xff\xfb\x27\xff\xfd\x05"

            "\xff\xfb\x01\xff\xfb\x03\xff\xfd\x18\xff\xfd\x1f"
            "\xff\xfa\x18\x01\xff\xf0"
            "\x0d\x0a\x55\x73\x65\x72\x20\x41\x63\x63\x65\x73\x73\x20\x56\x65" "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x0d\x0a\x0d\x0a"

            ,
            "User Access"

        },
        { "\xff\xfd\x01\xff\xfd\x1f\xff\xfd\x21\xff\xfb\x01\xff\xfb\x03\x46"
            "\x36\x37\x30\x0d\x0a\x0d\x4c\x6f\x67\x69\x6e\x3a\x20",
            "F670\\n Login:"
        },
        {0,0}
    };
    size_t VAR_2;

    for (VAR_2=0; VAR_1[VAR_2].input; VAR_2++) {
        int VAR_3;

        VAR_3 = FUNC_1(VAR_1[VAR_2].input, VAR_1[VAR_2].output);
        if (VAR_3) {
            FUNC_0(VAR_0, "telnet: selftest fail, item %u\n", (unsigned)VAR_2);
            return VAR_3;
        }
    }
    return 0;
}
