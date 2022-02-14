
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ case_sensitive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char**) ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (char*,int,int *) ;
 char FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*,char*,char*,char*,char*,...) ;
 int FUNC_11 (char*,int ,char*,int ) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,int) ;
 char* FUNC_14 (char*,int) ;
 int FUNC_15 (char*,int,char*,int) ;
 int * FUNC_16 (int ,char*) ;
 int VAR_5 ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;

int FUNC_19 ( int VAR_6, char ** VAR_7 )
{
    FUNC_3 ( VAR_6, VAR_7 );

    if ( FUNC_16 ( VAR_2, "" ) == ((void*)0) ) {
        FUNC_4 ( VAR_5, "Failed to set locale.\n" );
        return VAR_0;
    }





    FUNC_0 ( FUNC_9 ( "\\n" ) == '\n' );
    FUNC_0 ( FUNC_9 ( "\\a" ) == '\a' );
    FUNC_0 ( FUNC_9 ( "\\b" ) == '\b' );
    FUNC_0 ( FUNC_9 ( "\\t" ) == '\t' );
    FUNC_0 ( FUNC_9 ( "\\v" ) == '\v' );
    FUNC_0 ( FUNC_9 ( "\\f" ) == '\f' );
    FUNC_0 ( FUNC_9 ( "\\r" ) == '\r' );
    FUNC_0 ( FUNC_9 ( "\\\\" ) == '\\' );
    FUNC_0 ( FUNC_9 ( "\\0" ) == 0 );
    FUNC_0 ( FUNC_9 ( "\\x77" ) == 'w' );
    FUNC_0 ( FUNC_9 ( "\\x0A" ) == '\n' );





    FUNC_0 ( FUNC_11 ( "aap", FUNC_7 ( "aap", -1), "aap", FUNC_7 ( "aap", -1) ) == 0 );
    FUNC_0 ( FUNC_11 ( "aap", FUNC_7 ( "aap", -1), "aap ", FUNC_7 ( "aap ", -1) ) == 1 );
    FUNC_0 ( FUNC_11 ( "aap ", FUNC_7 ( "aap ", -1), "aap", FUNC_7 ( "aap", -1) ) == 1 );
    FUNC_1 ( FUNC_11 ( "aap", FUNC_7 ( "aap", -1), "aap noot", FUNC_7 ( "aap noot", -1) ), 5u );
    FUNC_1 ( FUNC_11 ( "aap", FUNC_7 ( "aap", -1), "noot aap", FUNC_7 ( "noot aap", -1) ), 5u );
    FUNC_1 ( FUNC_11 ( "aap", FUNC_7 ( "aap", -1), "noot aap mies", FUNC_7 ( "noot aap mies", -1) ), 10u );
    FUNC_1 ( FUNC_11 ( "noot aap mies", FUNC_7 ( "noot aap mies", -1), "aap", FUNC_7 ( "aap", -1) ), 10u );
    FUNC_1 ( FUNC_11 ( "otp", FUNC_7 ( "otp", -1), "noot aap", FUNC_7 ( "noot aap", -1) ), 5u );



    {
        char *VAR_8 = FUNC_14 ( "\xA1\xB5", 2 );
        FUNC_0 ( FUNC_6 ( VAR_8, "¡µ" ) == 0 );
        FUNC_5 ( VAR_8 );
    }

    {
        char *VAR_9 = FUNC_13 ( "Valid utf8", 10 );
        FUNC_0 ( FUNC_6 ( VAR_9, "Valid utf8" ) == 0 );
        FUNC_5 ( VAR_9 );
        char VAR_10[] = "Valid utf8 until \xc3\x28 we continue here";
        FUNC_0 ( FUNC_8 ( VAR_10, -1, ((void*)0) ) == VAR_1 );
        VAR_9 = FUNC_13 ( VAR_10, FUNC_17 ( VAR_10 ) );
        FUNC_0 ( FUNC_8 ( VAR_9, -1, ((void*)0) ) == VAR_3 );
        FUNC_0 ( FUNC_6 ( VAR_9, "Valid utf8 until �( we continue here" ) == 0 );
        FUNC_5 ( VAR_9 );
    }
    {
        FUNC_0 ( FUNC_18 ( "aapno", "aap€",3) == 0 );
        FUNC_0 ( FUNC_18 ( "aapno", "aap€",4) != 0 );
        FUNC_0 ( FUNC_18 ( "aapno", "a",4) != 0 );
        FUNC_0 ( FUNC_18 ( "a", "aap€",4) != 0 );


    }
    {
        FUNC_2 ( FUNC_15 ("aap noot mies", 12 , "aap noot mies", 12), -605);
        FUNC_2 ( FUNC_15 ("anm", 3, "aap noot mies", 12), -155);
        FUNC_2 ( FUNC_15 ("blu", 3, "aap noot mies", 12), 1073741824);
        VAR_4.case_sensitive = VAR_3;
        FUNC_2 ( FUNC_15 ("Anm", 3, "aap noot mies", 12), 1073741754);
        VAR_4.case_sensitive = VAR_1;
        FUNC_2 ( FUNC_15 ("Anm", 3, "aap noot mies", 12), -155);
        FUNC_2 ( FUNC_15 ("aap noot mies", 12,"Anm", 3 ), 1073741824);

    }


    char *VAR_11;
    VAR_11 = FUNC_10 ( "{terminal} [-t {title} blub ]-e {cmd}", "{cmd}", "aap", "{title}", "some title", "{terminal}", "rofi-sensible-terminal", ((void*)0));
    FUNC_12("%s\n",VAR_11);
    FUNC_0 ( FUNC_6 ( VAR_11, "rofi-sensible-terminal -t some title blub -e aap") == 0);
    FUNC_5(VAR_11);
    VAR_11 = FUNC_10 ( "{terminal} [-t {title} blub ]-e {cmd}", "{cmd}", "aap", "{terminal}", "rofi-sensible-terminal", ((void*)0));
    FUNC_12("%s\n",VAR_11);
    FUNC_0 ( FUNC_6 ( VAR_11, "rofi-sensible-terminal -e aap") == 0);
    FUNC_5(VAR_11);
    VAR_11 = FUNC_10 ( "{name} [<span weight='light' size='small'><i>({category})</i></span>]", "{name}", "Librecad", "{category}", "Desktop app", "{terminal}", "rofi-sensible-terminal", ((void*)0) );
    FUNC_12("%s\n",VAR_11);
    FUNC_0 ( FUNC_6 ( VAR_11, "Librecad <span weight='light' size='small'><i>(Desktop app)</i></span>") == 0);
    FUNC_5(VAR_11);
    VAR_11 = FUNC_10 ( "{name}[ <span weight='light' size='small'><i>({category})</i></span>]", "{name}", "Librecad", "{terminal}", "rofi-sensible-terminal", ((void*)0) );
    FUNC_0 ( FUNC_6 ( VAR_11, "Librecad") == 0);
    FUNC_5(VAR_11);
    VAR_11 = FUNC_10 ( "{terminal} [{title} blub ]-e {cmd}", "{cmd}", "aap", "{title}", "some title", "{terminal}", "rofi-sensible-terminal", ((void*)0));
    FUNC_12("%s\n",VAR_11);
    FUNC_0 ( FUNC_6 ( VAR_11, "rofi-sensible-terminal some title blub -e aap") == 0);
    FUNC_5(VAR_11);
    VAR_11 = FUNC_10 ( "{terminal} [{title} blub ]-e {cmd}",
            "{cmd}", "aap",
            "{title}", ((void*)0),
            "{terminal}", "rofi-sensible-terminal",
            ((void*)0));
    FUNC_12("%s\n",VAR_11);
    FUNC_0 ( FUNC_6 ( VAR_11, "rofi-sensible-terminal -e aap") == 0);
    FUNC_5(VAR_11);
}
