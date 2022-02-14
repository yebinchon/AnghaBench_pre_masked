
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*,int) ;

__attribute__((used)) static void FUNC_1 ( int VAR_0 )
{
    FUNC_0 ( "-no-config", "", "Do not load configuration, use default values.", ((void*)0), VAR_0 );
    FUNC_0 ( "-v,-version", "", "Print the version number and exit.", ((void*)0), VAR_0 );
    FUNC_0 ( "-dmenu", "", "Start in dmenu mode.", ((void*)0), VAR_0 );
    FUNC_0 ( "-display", "[string]", "X server to contact.", "${DISPLAY}", VAR_0 );
    FUNC_0 ( "-h,-help", "", "This help message.", ((void*)0), VAR_0 );
    FUNC_0 ( "-dump-xresources", "", "Dump the current configuration in Xresources format and exit.", ((void*)0), VAR_0 );
    FUNC_0 ( "-e", "[string]", "Show a dialog displaying the passed message and exit.", ((void*)0), VAR_0 );
    FUNC_0 ( "-markup", "", "Enable pango markup where possible.", ((void*)0), VAR_0 );
    FUNC_0 ( "-normal-window", "", "In dmenu mode, behave as a normal window. (experimental)", ((void*)0), VAR_0 );
    FUNC_0 ( "-show", "[mode]", "Show the mode 'mode' and exit. The mode has to be enabled.", ((void*)0), VAR_0 );
    FUNC_0 ( "-no-lazy-grab", "", "Disable lazy grab that, when fail to grab keyboard, does not block but retry later.", ((void*)0), VAR_0 );
    FUNC_0 ( "-no-plugins", "", "Disable loading of external plugins.", ((void*)0), VAR_0 );
    FUNC_0 ( "-plugin-path", "", "Directory used to search for rofi plugins.", ((void*)0), VAR_0 );
    FUNC_0 ( "-dump-config", "", "Dump the current configuration in rasi format and exit.", ((void*)0), VAR_0 );
    FUNC_0 ( "-dump-theme", "", "Dump the current theme in rasi format and exit.", ((void*)0), VAR_0 );
}
