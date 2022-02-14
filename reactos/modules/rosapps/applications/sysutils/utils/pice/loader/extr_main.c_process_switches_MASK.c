
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_0 ;

int FUNC_10(int VAR_1,char* VAR_2[])
{
 int VAR_3;
 char* VAR_4,*VAR_5 = ((void*)0);
 int VAR_6 = 134;
 int VAR_7 = 0;


 for(VAR_3=1;VAR_3<VAR_1;VAR_3++)
 {
  VAR_4 = VAR_2[VAR_3];
  if(*VAR_4 == '-')
  {
      int VAR_8=134;

   VAR_4++;
   if(FUNC_7(VAR_4,"load")==0 || FUNC_7(VAR_4,"l")==0)
   {
    VAR_8 = 135;
   }
   else if(FUNC_7(VAR_4,"unload")==0 || FUNC_7(VAR_4,"u")==0)
   {
    VAR_8 = 128;
   }
   else if(FUNC_7(VAR_4,"trans")==0 || FUNC_7(VAR_4,"t")==0)
            {
                VAR_8 = 130;
            }
   else if(FUNC_7(VAR_4,"reload")==0 || FUNC_7(VAR_4,"r")==0)
            {
                VAR_8 = 133;
            }
   else if(FUNC_7(VAR_4,"verbose")==0 || FUNC_7(VAR_4,"v")==0)
            {
       if( VAR_0+1 > VAR_0 )
        VAR_0++;
            }
   else if(FUNC_7(VAR_4,"install")==0 || FUNC_7(VAR_4,"i")==0)
            {
                VAR_8 = 136;
            }
   else if(FUNC_7(VAR_4,"uninstall")==0 || FUNC_7(VAR_4,"x")==0)
            {
                VAR_8 = 129;
            }
   else if(FUNC_7(VAR_4,"status")==0 || FUNC_7(VAR_4,"s")==0)
            {
                VAR_8 = 132;
            }
   else if(FUNC_7(VAR_4,"break")==0 || FUNC_7(VAR_4,"b")==0)
            {
                VAR_8 = 137;
            }
   else if(FUNC_7(VAR_4,"serial")==0 || FUNC_7(VAR_4,"ser")==0)
            {
                VAR_8 = 131;
            }
   else
   {
    FUNC_4("LOADER: error: unknown switch %s", VAR_2[VAR_3]);
    VAR_7 = 1;
   }

            if( VAR_8 != 134 )
            {
                if( VAR_6 == 134 )
                    VAR_6 = VAR_8;
                else
                if( VAR_6 == VAR_8 )
                {

                }
                else
                {
                    FUNC_4("LOADER: error: conflicting switch %s", VAR_2[VAR_3]);
                    VAR_7 = 1;
                }
            }
  }
  else
  {
            if( VAR_5 )
            {
                FUNC_4("LOADER: error: additional filename %s", VAR_4);
                VAR_7 = 1;
            }
   VAR_5 = VAR_4;
  }
 }


    switch( VAR_6 )
    {
        case 130 :
        case 135 :
        case 128 :
            if( !VAR_5 )
            {
                FUNC_4("LOADER: error: missing filename\n");
                VAR_7 = 1;
            }
            break;
        case 133 :

            break;
        case 132:
            FUNC_6();
            break;
        case 137:
            FUNC_2();
            break;





        case 134 :
            FUNC_4("LOADER: no action specified specifed on commandline\n");
            VAR_7 = 1;

            break;
        default :
            FUNC_4("LOADER: an internal error has occurred at commandline parsing\n");
            VAR_7 = 1;
    }

    if( !VAR_7 )
    {
        switch( VAR_6 )
        {
            case 130 :
                FUNC_4("LOADER: trying to translate file %s...\n",VAR_5);
                if( FUNC_5(VAR_5)==0 )
                    FUNC_4("LOADER: file %s has been translated\n",VAR_5);
                else
                    FUNC_4("LOADER: error while translating file %s\n",VAR_5);
                break;
            case 135 :
            case 128 :
            case 133 :
                FUNC_0(VAR_6,VAR_5);
                break;
        }
    }

    return VAR_7;
}
