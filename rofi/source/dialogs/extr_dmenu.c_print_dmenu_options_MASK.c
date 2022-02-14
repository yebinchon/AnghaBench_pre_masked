
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*,char*,int) ;
 int VAR_0 ;

void FUNC_3 ( void )
{
    int VAR_1 = FUNC_1 ( FUNC_0 ( VAR_0 ) );
    FUNC_2 ( "-mesg", "[string]", "Print a small user message under the prompt (uses pango markup)", ((void*)0), VAR_1 );
    FUNC_2 ( "-p", "[string]", "Prompt to display left of entry field", ((void*)0), VAR_1 );
    FUNC_2 ( "-selected-row", "[integer]", "Select row", ((void*)0), VAR_1 );
    FUNC_2 ( "-format", "[string]", "Output format string", "s", VAR_1 );
    FUNC_2 ( "-u", "[list]", "List of row indexes to mark urgent", ((void*)0), VAR_1 );
    FUNC_2 ( "-a", "[list]", "List of row indexes to mark active", ((void*)0), VAR_1 );
    FUNC_2 ( "-l", "[integer] ", "Number of rows to display", ((void*)0), VAR_1 );
    FUNC_2 ( "-window-title", "[string] ", "Set the dmenu window title", ((void*)0), VAR_1 );
    FUNC_2 ( "-i", "", "Set filter to be case insensitive", ((void*)0), VAR_1 );
    FUNC_2 ( "-only-match", "", "Force selection or custom entry", ((void*)0), VAR_1 );
    FUNC_2 ( "-no-custom", "", "Don't accept custom entry", ((void*)0), VAR_1 );
    FUNC_2 ( "-select", "[string]", "Select the first row that matches", ((void*)0), VAR_1 );
    FUNC_2 ( "-password", "", "Do not show what the user inputs. Show '*' instead.", ((void*)0), VAR_1 );
    FUNC_2 ( "-markup-rows", "", "Allow and render pango markup as input data.", ((void*)0), VAR_1 );
    FUNC_2 ( "-sep", "[char]", "Element separator.", "'\\n'", VAR_1 );
    FUNC_2 ( "-input", "[filename]", "Read input from file instead from standard input.", ((void*)0), VAR_1 );
    FUNC_2 ( "-sync", "", "Force dmenu to first read all input data, then show dialog.", ((void*)0), VAR_1 );
    FUNC_2 ( "-async-pre-read", "[number]", "Read several entries blocking before switching to async mode", "25", VAR_1 );
    FUNC_2 ( "-w", "windowid", "Position over window with X11 windowid.", ((void*)0), VAR_1 );
}
