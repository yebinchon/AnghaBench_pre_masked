
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_1, "Usage : %s [options] XMLfiles ...\n", VAR_2);



    FUNC_0(VAR_1, "\tParse the XML files\n");

    FUNC_0(VAR_1, "\t--version : display the version of the XML library used\n");
    FUNC_0(VAR_1, "\t--recover : output what was parsable on broken XML documents\n");
    FUNC_0(VAR_1, "\t--huge : remove any internal arbitrary parser limits\n");
    FUNC_0(VAR_1, "\t--noent : substitute entity references by their value\n");
    FUNC_0(VAR_1, "\t--noenc : ignore any encoding specified inside the document\n");
    FUNC_0(VAR_1, "\t--noout : don't output the result tree\n");
    FUNC_0(VAR_1, "\t--path 'paths': provide a set of paths for resources\n");
    FUNC_0(VAR_1, "\t--load-trace : print trace of all external entities loaded\n");
    FUNC_0(VAR_1, "\t--nonet : refuse to fetch DTDs or entities over network\n");
    FUNC_0(VAR_1, "\t--nocompact : do not generate compact text nodes\n");
    FUNC_0(VAR_1, "\t--htmlout : output results as HTML\n");
    FUNC_0(VAR_1, "\t--nowrap : do not put HTML doc wrapper\n");






    FUNC_0(VAR_1, "\t--timing : print some timings\n");
    FUNC_0(VAR_1, "\t--output file or -o file: save to a given file\n");
    FUNC_0(VAR_1, "\t--repeat : repeat 100 times, for timing or profiling\n");
    FUNC_0(VAR_1, "\t--insert : ad-hoc test for valid insertions\n");
    FUNC_0(VAR_1, "\t--maxmem nbbytes : limits memory allocation to nbbytes bytes\n");
    FUNC_0(VAR_1, "\t--nowarning : do not emit warnings from parser/validator\n");
    FUNC_0(VAR_1, "\t--noblanks : drop (ignorable?) blanks spaces\n");
    FUNC_0(VAR_1, "\t--nocdata : replace cdata section with text nodes\n");
    FUNC_0(VAR_1, "\t--c14n : save in W3C canonical format v1.0 (with comments)\n");
    FUNC_0(VAR_1, "\t--c14n11 : save in W3C canonical format v1.1 (with comments)\n");
    FUNC_0(VAR_1, "\t--exc-c14n : save in W3C exclusive canonical format (with comments)\n");


    FUNC_0(VAR_1, "\t--nsclean : remove redundant namespace declarations\n");
    FUNC_0(VAR_1, "\t--testIO : test user I/O support\n");






    FUNC_0(VAR_1, "\t--auto : generate a small doc on the fly\n");





    FUNC_0(VAR_1, "\t--loaddtd : fetch external DTD\n");
    FUNC_0(VAR_1, "\t--dtdattr : loaddtd + populate the tree with inherited attributes \n");







    FUNC_0(VAR_1, "\t--chkregister : verify the node registration code\n");
    FUNC_0(VAR_1, "\t--sax: do not build a tree but work just at the SAX level\n");
    FUNC_0(VAR_1, "\t--oldxml10: use XML-1.0 parsing rules before the 5th edition\n");




    FUNC_0(VAR_1, "\nLibxml project home page: http://xmlsoft.org/\n");
    FUNC_0(VAR_1, "To report bugs or get some help check: http://xmlsoft.org/bugs.html\n");
}
