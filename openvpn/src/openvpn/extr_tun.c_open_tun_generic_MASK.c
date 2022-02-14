
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tunname ;
struct tuntap {scalar_t__ type; int persistent_if; int actual_name; void* fd; } ;
struct ifreq {int ifr_name; } ;
typedef int dynamic_name ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (void*,int ,void*) ;
 int FUNC_4 (int,char*,...) ;
 void* FUNC_5 (char*,int ) ;
 int FUNC_6 (struct tuntap*) ;
 int FUNC_7 (char*,int,char*,char const*,...) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,int *) ;
 int FUNC_12 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_8, const char *VAR_9, const char *VAR_10,
                 bool VAR_11, struct tuntap *VAR_12)
{
    char VAR_13[256];
    char VAR_14[256];
    bool VAR_15 = 0;

    if (VAR_12->type == VAR_0)
    {
        FUNC_6(VAR_12);
    }
    else
    {



        if (VAR_10)
        {
            FUNC_7(VAR_13, sizeof(VAR_13), "%s", VAR_10);
        }
        else
        {
            if (VAR_11 && !FUNC_1((unsigned char *)VAR_8))
            {
                int VAR_16;
                for (VAR_16 = 0; VAR_16 < 256; ++VAR_16)
                {
                    FUNC_7(VAR_13, sizeof(VAR_13),
                                     "/dev/%s%d", VAR_8, VAR_16);
                    FUNC_7(VAR_14, sizeof(VAR_14),
                                     "%s%d", VAR_8, VAR_16);
                    if ((VAR_12->fd = FUNC_5(VAR_13, VAR_6)) > 0)
                    {
                        VAR_15 = 1;
                        break;
                    }
                    FUNC_4(VAR_1 | VAR_3, "Tried opening %s (failed)", VAR_13);
                }
                if (!VAR_15)
                {
                    FUNC_4(VAR_4, "Cannot allocate TUN/TAP dev dynamically");
                }
            }



            else
            {
                FUNC_7(VAR_13, sizeof(VAR_13), "/dev/%s", VAR_8);
            }
        }

        if (!VAR_15)
        {

            if (FUNC_2( VAR_8 ) > 0)
            {
                FUNC_4(VAR_5, "TUN/TAP device %s exists previously, keep at program end", VAR_8 );
                VAR_12->persistent_if = 1;
            }

            if ((VAR_12->fd = FUNC_5(VAR_13, VAR_6)) < 0)
            {
                FUNC_4(VAR_2, "Cannot open TUN/TAP dev %s", VAR_13);
            }
        }

        FUNC_9(VAR_12->fd);
        FUNC_8(VAR_12->fd);
        FUNC_4(VAR_5, "TUN/TAP device %s opened", VAR_13);


        VAR_12->actual_name = FUNC_11(VAR_15 ? VAR_14 : VAR_8, ((void*)0));
    }
}
