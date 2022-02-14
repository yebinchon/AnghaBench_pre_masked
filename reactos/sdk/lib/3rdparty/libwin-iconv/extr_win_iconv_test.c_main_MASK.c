
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,char*) ;

int
FUNC_6(int VAR_0, char **VAR_1)
{
    if (FUNC_0("ascii", 20127))
    {
        FUNC_5("ascii", "ABC", "ascii", "ABC");

        FUNC_5("ascii", "\x80\xFF", "ascii", "\x00\x7F");
    }


    if (FUNC_0("utf-8", 65001)
            && FUNC_0("utf-16be", 1201) && FUNC_0("utf-16le", 1200)
            && FUNC_0("utf-32be", 12001) && FUNC_0("utf-32le", 12000)
            )
    {



        FUNC_5("utf-16", "\xFE\xFF\x01\x02", "utf-16be", "\x01\x02");
        FUNC_5("utf-16", "\xFF\xFE\x02\x01", "utf-16be", "\x01\x02");
        FUNC_5("utf-32", "\x00\x00\xFE\xFF\x00\x00\x01\x02", "utf-32be", "\x00\x00\x01\x02");
        FUNC_5("utf-32", "\xFF\xFE\x00\x00\x02\x01\x00\x00", "utf-32be", "\x00\x00\x01\x02");
        FUNC_5("utf-16", "\xFE\xFF\x00\x01", "utf-8", "\x01");

        FUNC_5("utf-8", "\x01", "utf-16", "\xFE\xFF\x00\x01");
        FUNC_5("utf-8", "\x01", "utf-32", "\x00\x00\xFE\xFF\x00\x00\x00\x01");





        FUNC_5("utf-16be", "\xFE\xFF\x01\x02", "utf-16be", "\xFE\xFF\x01\x02");
        FUNC_5("utf-16le", "\xFF\xFE\x02\x01", "utf-16be", "\xFE\xFF\x01\x02");
        FUNC_5("utf-32be", "\x00\x00\xFE\xFF\x00\x00\x01\x02", "utf-32be", "\x00\x00\xFE\xFF\x00\x00\x01\x02");
        FUNC_5("utf-32le", "\xFF\xFE\x00\x00\x02\x01\x00\x00", "utf-32be", "\x00\x00\xFE\xFF\x00\x00\x01\x02");
        FUNC_5("utf-16be", "\xFE\xFF\x00\x01", "utf-8", "\xEF\xBB\xBF\x01");
        FUNC_5("utf-8", "\xEF\xBB\xBF\x01", "utf-8", "\xEF\xBB\xBF\x01");

        FUNC_5("utf-16be", "\x01\x02", "utf-16le", "\x02\x01");
        FUNC_5("utf-16le", "\x02\x01", "utf-16be", "\x01\x02");
        FUNC_5("utf-16be", "\xFE\xFF", "utf-16le", "\xFF\xFE");
        FUNC_5("utf-16le", "\xFF\xFE", "utf-16be", "\xFE\xFF");
        FUNC_5("utf-32be", "\x00\x00\x03\x04", "utf-32le", "\x04\x03\x00\x00");
        FUNC_5("utf-32le", "\x04\x03\x00\x00", "utf-32be", "\x00\x00\x03\x04");
        FUNC_5("utf-32be", "\x00\x00\xFF\xFF", "utf-16be", "\xFF\xFF");
        FUNC_5("utf-16be", "\xFF\xFF", "utf-32be", "\x00\x00\xFF\xFF");
        FUNC_5("utf-32be", "\x00\x01\x00\x00", "utf-16be", "\xD8\x00\xDC\x00");
        FUNC_5("utf-16be", "\xD8\x00\xDC\x00", "utf-32be", "\x00\x01\x00\x00");
        FUNC_5("utf-32be", "\x00\x10\xFF\xFF", "utf-16be", "\xDB\xFF\xDF\xFF");
        FUNC_5("utf-16be", "\xDB\xFF\xDF\xFF", "utf-32be", "\x00\x10\xFF\xFF");
        FUNC_1("utf-32be", "\x00\x11\x00\x00", "utf-16be", "");
        FUNC_1("utf-16be", "\xDB\xFF\xE0\x00", "utf-32be", "");
        FUNC_5("utf-8", "\xE3\x81\x82", "utf-16be", "\x30\x42");
        FUNC_2("utf-8", "\xE3", "utf-16be", "");
    }


    if (FUNC_0("cp932", 932)
            && FUNC_0("cp20932", 20932) && FUNC_0("euc-jp", 51932)
            && FUNC_0("cp50220", 50220) && FUNC_0("cp50221", 50221)
            && FUNC_0("cp50222", 50222) && FUNC_0("iso-2022-jp", 50221))
    {


        FUNC_5("utf-16be", "\xFF\x5E", "cp932", "\x81\x60");
        FUNC_5("utf-16be", "\x30\x1C", "cp932", "\x81\x60");
        FUNC_5("utf-16be", "\xFF\x5E", "cp932//nocompat", "\x81\x60");
        FUNC_1("utf-16be", "\x30\x1C", "cp932//nocompat", "");
        FUNC_5("euc-jp", "\xA4\xA2", "utf-16be", "\x30\x42");
        FUNC_2("euc-jp", "\xA4\xA2\xA4", "utf-16be", "\x30\x42");
        FUNC_1("euc-jp", "\xA4\xA2\xFF\xFF", "utf-16be", "\x30\x42");
        FUNC_5("cp932", "\x81\x60", "iso-2022-jp", "\x1B\x24\x42\x21\x41\x1B\x28\x42");
        FUNC_5("UTF-16BE", "\xFF\x5E", "iso-2022-jp", "\x1B\x24\x42\x21\x41\x1B\x28\x42");
        FUNC_1("UTF-16BE", "\x30\x1C", "iso-2022-jp//nocompat", "");
        FUNC_5("UTF-16BE", "\x30\x42\x30\x44", "iso-2022-jp", "\x1B\x24\x42\x24\x22\x24\x24\x1B\x28\x42");
        FUNC_5("iso-2022-jp", "\x1B\x24\x42\x21\x41\x1B\x28\x42", "UTF-16BE", "\xFF\x5E");
    }





    FUNC_1("UTF-16BE", "\xFF\x41", "iso-8859-1", "");
    FUNC_5("UTF-16BE", "\xFF\x41", "iso-8859-1//translit", "a");





    FUNC_1("UTF-16BE", "\x30\x42", "ascii", "");
    FUNC_5("UTF-16BE", "\x30\x42", "ascii//translit", "?");




    FUNC_1("UTF-8", "\xFF A \xFF B", "ascii//ignore", " A  B");
    FUNC_1("UTF-8", "\xEF\xBC\xA1 A \xEF\xBC\xA2 B", "ascii//ignore", " A  B");
    FUNC_1("UTF-8", "\xEF\x01 A \xEF\x02 B", "ascii//ignore", "\x01 A \x02 B");







    return 0;
}
