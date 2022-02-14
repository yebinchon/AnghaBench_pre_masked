
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int insert ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char const*,char const*,scalar_t__,char const*,char const*,scalar_t__) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static UINT FUNC_7( MSIHANDLE VAR_1, const char *VAR_2, UINT VAR_3, const char *VAR_4,
                                  const char *VAR_5, UINT VAR_6 )
{
    const char VAR_7[] =
        "INSERT INTO `RegLocator` (`Signature_`, `Root`, `Key`, `Name`, `Type`) "
        "VALUES( '%s', %u, '%s', '%s', %u )";
    char *VAR_8;
    UINT VAR_9, VAR_10;

    VAR_9 = FUNC_6( VAR_2 ) + 10 + FUNC_6( VAR_4 ) + FUNC_6( VAR_5 ) + 10 + sizeof( VAR_7 );
    VAR_8 = FUNC_1( FUNC_0(), 0, VAR_9 );
    FUNC_5( VAR_8, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );
    VAR_10 = FUNC_4( VAR_1, VAR_8 );
    FUNC_2( FUNC_0(), 0, VAR_8 );
    FUNC_3(VAR_10 == VAR_0, "failed to insert into reglocator table: %u\n", VAR_10); return VAR_10;

}
